@class AWESearchAIGCHistoryPreviewQuery, NSDictionary, NSString;

@interface AWESearchAIGCLastQueryGuideViewModel : NSObject <AWESearchAIGCLastQueryGuideAction>

@property (retain, nonatomic) AWESearchAIGCHistoryPreviewQuery *query;
@property (copy, nonatomic) NSDictionary *logPB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lastQueryGuideRemoveIfNeed;
- (id)lastQueryGuideCurrentQuery;
- (void)lastQueryGuideUpdateWithComplete:(id /* block */)a0;
- (id)lastQueryGuideLogPB;
- (void).cxx_destruct;

@end
