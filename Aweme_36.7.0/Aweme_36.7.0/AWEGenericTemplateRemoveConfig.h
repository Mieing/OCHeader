@class AWEVideoPublishViewModel;

@interface AWEGenericTemplateRemoveConfig : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL needUpdateVideoData;
@property (nonatomic) BOOL isPureRemoveScene;
@property (nonatomic) BOOL lastTemplateHasStickers;
@property (copy, nonatomic) id /* block */ onWillRemove;
@property (copy, nonatomic) id /* block */ onDidRemove;
@property (copy, nonatomic) id /* block */ onDidUpdateVideoData;

- (void).cxx_destruct;

@end
