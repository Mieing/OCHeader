@class NSString;

@interface ToggleVirtualAnchorResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) BOOL enableVirtualAnchor;
@property (copy, nonatomic) NSString *virtualTool;

+ (id)descriptor;

@end
