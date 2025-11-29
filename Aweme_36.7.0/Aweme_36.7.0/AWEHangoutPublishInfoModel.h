@class UIImage, NSString, AWEPublishBaseTask;

@interface AWEHangoutPublishInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSelfPublish;
@property (weak, nonatomic) AWEPublishBaseTask *publishTask;
@property (retain, nonatomic) UIImage *localCoverImage;
@property (nonatomic) unsigned long long publishState;
@property (nonatomic) double uploadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
