@interface WANativeViewPointerEvent : NSObject

@property (nonatomic) long long viewId;
@property (nonatomic) long long type;
@property (nonatomic) long long embedderId;
@property (nonatomic) long long timeStampMicrosecond;
@property (nonatomic) struct CGPoint { double x; double y; } position;

@end
