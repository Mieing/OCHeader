@class NSString;

@interface AWEEditToolUsedCropProvider : NSObject <AWEEditToolUsedProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCropped:(id)a0;

- (id)isEditedWithPublishModel:(id)a0;

@end
