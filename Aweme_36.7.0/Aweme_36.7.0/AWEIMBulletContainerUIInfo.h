@class NSNumber, NSString;

@interface AWEIMBulletContainerUIInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *locationType;
@property (retain, nonatomic) NSNumber *styleType;
@property (retain, nonatomic) NSNumber *layoutType;
@property (retain, nonatomic) NSNumber *zoomScreenWidth;
@property (retain, nonatomic) NSNumber *zoomRatio;
@property (retain, nonatomic) NSNumber *zoomScreenHeight;
@property (retain, nonatomic) NSNumber *zoomLevel;
@property (retain, nonatomic) NSNumber *innerCardWidth;
@property (retain, nonatomic) NSNumber *innerCardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configWithUIInfo:(id)a0;
- (void)configWithTIMUIInfo:(id)a0;
- (void)__setupForBigFontStyleIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
