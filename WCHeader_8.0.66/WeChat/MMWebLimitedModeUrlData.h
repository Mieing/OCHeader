@class NSString, NSData;

@interface MMWebLimitedModeUrlData : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSData *coverData;

- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
