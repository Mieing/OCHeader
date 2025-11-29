@class NSString, NSIndexPath, ACCQuickFlashHotModel;

@interface ACCFlashTopicSignalModel : NSObject

@property (copy, nonatomic) ACCQuickFlashHotModel *selectedTitle;
@property (retain, nonatomic) NSIndexPath *index;
@property (copy, nonatomic) NSString *titleForPreFetch;
@property (nonatomic) unsigned long long scrollPosition;

- (void).cxx_destruct;

@end
