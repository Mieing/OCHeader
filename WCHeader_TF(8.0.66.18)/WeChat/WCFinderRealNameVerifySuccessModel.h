@class NSString, FinderRealNameVerifyPrepareInfo;

@interface WCFinderRealNameVerifySuccessModel : NSObject

@property (retain, nonatomic) FinderRealNameVerifyPrepareInfo *prepareInfo;
@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) NSString *faceVerifyUrl;
@property (nonatomic) BOOL needFaceVerify;

- (void).cxx_destruct;

@end
