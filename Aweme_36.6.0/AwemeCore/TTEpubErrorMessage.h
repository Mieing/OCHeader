@class NSString;

@interface TTEpubErrorMessage : NSObject

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_msg;

- (void).cxx_destruct;

@end
