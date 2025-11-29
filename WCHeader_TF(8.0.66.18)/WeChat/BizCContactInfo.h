@class CContact;

@interface BizCContactInfo : NSObject

@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL fromStrange;

+ (id)generateBizCContactInfo:(id)a0 fromStrange:(BOOL)a1;

- (void).cxx_destruct;

@end
