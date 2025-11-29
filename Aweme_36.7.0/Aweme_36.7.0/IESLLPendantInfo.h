@class NSNumber, NSString;

@interface IESLLPendantInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *lifePendantWidth;
@property (retain, nonatomic) NSNumber *lifePendantHeight;
@property (retain, nonatomic) NSNumber *lifePendantPositionLeftX;
@property (retain, nonatomic) NSNumber *lifePendantPositionRightX;
@property (retain, nonatomic) NSNumber *lifePendantPositionTopY;
@property (retain, nonatomic) NSNumber *lifePendantPositionBottomY;
@property (retain, nonatomic) NSString *lifePendantAllowedPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
