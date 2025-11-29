@class NSString;

@interface MMCameraBeautySuitItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *cameraSceneTitle;
@property (copy, nonatomic) id /* block */ beautyDescriptorFactory;

+ (id)offItem;
+ (id)lowItem;
+ (id)mediumItem;
+ (id)highItem;

- (id)genOMJBeautyDesc;
- (void).cxx_destruct;

@end
