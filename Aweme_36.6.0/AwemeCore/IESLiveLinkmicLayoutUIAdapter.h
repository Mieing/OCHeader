@class IESLiveLinkmicLayoutUIObject, NSString, IESLiveLinkmicLayoutConfigResourceConfiguration;
@protocol IESLiveLinkmicLayoutConfigParser, IESLiveLinkmicLayoutConfigProcessor;

@interface IESLiveLinkmicLayoutUIAdapter : NSObject <IESLiveLinkmicLayoutContainerAdaptable, IESLiveLinkmicLayoutContentModeAdaptable, IESLiveLinkmicLayoutConfigResourceAdaptable, IESLiveLinkmicLayoutStreamAdaptable, IESLiveLinkmicLayoutConfigProcessable>

@property (nonatomic) BOOL enableSlotsMargin;
@property (nonatomic) double slotMarginWidth;
@property (nonatomic) BOOL shouldUseCache;
@property (nonatomic) BOOL shouldBuildSync;
@property (retain, nonatomic) IESLiveLinkmicLayoutUIObject *playerContainer;
@property (retain, nonatomic) IESLiveLinkmicLayoutUIObject *seatsContainer;
@property (nonatomic) BOOL enableCustomizedSeatsContainer;
@property (nonatomic) BOOL clipSeatToContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long scaleMode;
@property (nonatomic) unsigned long long alignType;
@property (retain, nonatomic) IESLiveLinkmicLayoutConfigResourceConfiguration *resourceConfiguration;
@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfigParser> resourceParser;
@property (readonly, nonatomic) BOOL shouldFetchResourceSync;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfigProcessor> configProcessor;

@end
