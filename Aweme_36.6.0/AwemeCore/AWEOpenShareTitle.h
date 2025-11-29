@class NSString, NSMutableArray;

@interface AWEOpenShareTitle : NSObject

@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *mentions;
@property (retain, nonatomic) NSMutableArray *hashtags;

- (void).cxx_destruct;

@end
