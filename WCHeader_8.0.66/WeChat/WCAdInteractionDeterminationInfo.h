@class NSString;

@interface WCAdInteractionDeterminationInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *determinationId;
@property (nonatomic) unsigned long long determinationType;
@property (retain, nonatomic) NSString *resourceId;
@property (readonly, nonatomic) BOOL canBeClicked;
@property (readonly, nonatomic) BOOL canBeInteractived;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positionArea;
@property (nonatomic) double triggerPercentage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
