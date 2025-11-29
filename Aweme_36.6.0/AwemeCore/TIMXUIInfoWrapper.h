@class TIMXPBNUiInfo, NSString;

@interface TIMXUIInfoWrapper : NSObject <TIMXUIInfoProtocol>

@property (retain, nonatomic) TIMXPBNUiInfo *pbUIInfo;
@property (readonly, nonatomic) int locationType;
@property (readonly, nonatomic) int styleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPBObj:(id)a0;
- (void).cxx_destruct;

@end
