@class NSString, NSError, AWECodeGenComponentUnavailableNoticeModel;

@interface AWECommerceAnchorCheckResult : NSObject <AWECommerceAnchorCheckResult>

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reasonDetailUrl;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWECodeGenComponentUnavailableNoticeModel *notice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithIsValid:(BOOL)a0 error:(id)a1 checkResultResponseModel:(id)a2;

- (void).cxx_destruct;

@end
