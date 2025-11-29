@class NSString, UIImage, NSArray;

@interface AWETeenModeProfileEditModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSArray *avatarURL;
@property (copy, nonatomic) NSString *avatarURI;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (copy, nonatomic) id /* block */ cellRefreshBlock;

- (void)refreshCell;
- (void).cxx_destruct;

@end
