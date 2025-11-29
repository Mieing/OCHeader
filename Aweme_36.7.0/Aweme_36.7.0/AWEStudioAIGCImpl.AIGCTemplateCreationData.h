@class NSDictionary, UIImage, NSArray;

@interface AWEStudioAIGCImpl.AIGCTemplateCreationData : NSObject <AWEStudioAIGCTemplateMutableCreationData> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextData;
}

@property (nonatomic, copy) NSDictionary *slotModelIDMapping;
@property (nonatomic) BOOL isSelectedLoraGenerating;
@property (nonatomic, retain) UIImage *loraCoverImage;
@property (nonatomic, copy) NSArray *avatarTemplateSlotsInfo;

- (BOOL)isAIAvatarTemplateScene;
- (void).cxx_destruct;
- (id)init;

@end
