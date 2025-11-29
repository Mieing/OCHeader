@interface WCTopicUtil : MMObject

+ (id)searchTagInfoFromWCDataItem:(id)a0 commentItem:(id)a1;
+ (id)topicSearchRegex;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstTopicRangeWithNsContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)topicRangeArrWithNsContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)topicRangeArrWithNsContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 onlyMatchFirst:(BOOL)a2;
+ (id)topicStringArrWithNsContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)topicSearchViewControllerWithDelegate:(id)a0 context:(id)a1;
+ (void)showTopicSearchControllerInHalfScreen:(id)a0 inViewController:(id)a1;
+ (id)topicQueryInfoFromText:(id)a0;
+ (BOOL)isContentMayContainTopic:(id)a0;
+ (id)topicContentWithoutTag:(id)a0;

@end
