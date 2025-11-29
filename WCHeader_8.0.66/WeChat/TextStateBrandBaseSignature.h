@class NSString;

@interface TextStateBrandBaseSignature : NSObject

@property (retain, nonatomic) NSString *textStateSignature;
@property (retain, nonatomic) NSString *sourceId;

- (id)businessInfo;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
