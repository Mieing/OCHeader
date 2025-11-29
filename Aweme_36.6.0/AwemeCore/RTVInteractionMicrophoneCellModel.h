@class NSString;

@interface RTVInteractionMicrophoneCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey, RTVInteractionIconModelProtocol>

@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (BOOL)joinDiffCalculate;
- (id)initWithMicrophoneMuted:(BOOL)a0;
- (id)accessibilityLabel;
- (id)iconName;

@end
