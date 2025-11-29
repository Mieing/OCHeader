@class NSString;

@interface RTVRoomDynamicResolutionContent : JSONModel <RTVXRRoomMessageContent>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

@end
