@class NSMutableDictionary, NSDictionary, NSString, ARTBusiness;

@interface ARTBusinessOutput : NSObject

@property (weak, nonatomic) ARTBusiness *session;
@property (retain, nonatomic) NSMutableDictionary *innerOutExtraInfo;
@property (nonatomic) int result;
@property (nonatomic) float confidence;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;
- (id)initWithBusiness:(id)a0;

@end
