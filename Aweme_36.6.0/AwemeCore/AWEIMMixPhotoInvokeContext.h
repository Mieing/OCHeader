@class NSNumber, NSString;

@interface AWEIMMixPhotoInvokeContext : NSObject

@property (retain, nonatomic) NSNumber *preferThemeStyle;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;

- (id)initWithEnterMethod:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;

@end
