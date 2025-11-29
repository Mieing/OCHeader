@class NSString, NSData;
@protocol FaceRecogPayConfigLogicDelegate;

@interface FaceRecogPayConfigLogic : MMObject <PBMessageObserverDelegate> {
    NSString *_actionBioId;
    NSString *_actionData;
    double _reductionRatio;
    NSString *_takeMessage;
    NSString *_actionHint;
    NSString *_colorData;
    NSData *_selectData;
    unsigned long long _reflectBioId;
}

@property (weak, nonatomic) id<FaceRecogPayConfigLogicDelegate> delegate;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *package_sign;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int check_live_type;
@property (nonatomic) unsigned int interrupt_ret;
@property (retain, nonatomic) NSString *interrupt_msg;
@property (nonatomic) BOOL useHttp;

- (void)resetConfig;
- (id)getBioId;
- (unsigned long long)getReflectBioId;
- (id)getActionData;
- (double)reductionRatio;
- (id)takeMessage;
- (id)actionHint;
- (id)getColorData;
- (id)getSelectData;
- (BOOL)startGetBioConfig:(id)a0;
- (BOOL)startGetFaceCheckActionUseHttp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
