@class AWETemplateTagsModel, NSString;
@protocol AWEPzComponentProtocol;

@interface AWEHPTabGuideLabelCandidate : NSObject <AWEHPTabGuideCandidateProtocol>

@property (retain, nonatomic) AWETemplateTagsModel *model;
@property (copy, nonatomic) NSString *pitayaTraceID;
@property (nonatomic) long long state;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL binding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
