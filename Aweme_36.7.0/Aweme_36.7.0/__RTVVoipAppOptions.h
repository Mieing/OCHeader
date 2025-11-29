@class NSArray, NSNumber, NSString;
@protocol RxInjector;

@interface __RTVVoipAppOptions : NSObject <__RTVVoipAppOptionsInterface>

@property (copy, nonatomic) NSArray *supportCallTypes;
@property (retain, nonatomic) NSNumber *supportHorizontalPropPanel;
@property (nonatomic) BOOL supportForbidGroupVoip;
@property (nonatomic) BOOL enableExternalAU;
@property (nonatomic) BOOL supportRecordIndicator;
@property (retain, nonatomic) NSNumber *supportPairVoipEnableCamera;
@property (nonatomic) BOOL disableInteractionSticker;
@property (nonatomic) BOOL groupVoipDisableFold;
@property (nonatomic) BOOL undertakePageNeedFold;
@property (nonatomic) BOOL inVoipDisableStatusCheck;
@property (nonatomic) BOOL needRecallWhileEndInNarrowView;
@property (nonatomic) long long longConnectionServiceID;
@property (nonatomic) long long boeLongConnectionServiceID;
@property (copy, nonatomic) id /* block */ customizeCastButtonClickAction;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
