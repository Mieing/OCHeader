@class GetA8KeyLogic, NSString;
@protocol WAWAGetA8KeyLogicHelperDelegate;

@interface WAGetA8KeyLogicHelper : NSObject <GetA8KeyLogicDelegate, IWAWAGetA8KeyLogicHelper>

@property (retain, nonatomic) GetA8KeyLogic *logic;
@property (weak, nonatomic) id<WAWAGetA8KeyLogicHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 delegate:(id)a1;
- (id)allA8KeyLogic;
- (void)onGetA8KeyResult:(id)a0;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyFail;
- (id)queryParamDictFromFullUrl:(id)a0;
- (unsigned long long)getSourceType;
- (void)weappGetA8KeyWithCodeStr:(id)a0 weappCodeVerision:(long long)a1 geta8keyScene:(long long)a2;
- (void)weappGetA8KeyWithCodeStr:(id)a0 geta8keyScene:(long long)a1;
- (void).cxx_destruct;

@end
