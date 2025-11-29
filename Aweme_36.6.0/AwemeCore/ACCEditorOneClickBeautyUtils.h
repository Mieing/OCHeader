@class NSString;

@interface ACCEditorOneClickBeautyUtils : NSObject <ACCEditorOneClickBeautyUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableHDR:(id)a0;
+ (BOOL)enableSmartBeauty:(id)a0;
+ (BOOL)useSmartBeauty:(id)a0;
+ (BOOL)useHDR:(id)a0;
+ (BOOL)enableSmartBeautyWithPublishModel:(id)a0;
+ (id)projectImprovedMethod:(id)a0;
+ (id)smartBeautyImprovedMethod:(id)a0;
+ (BOOL)useAIEnhance:(id)a0;


@end
