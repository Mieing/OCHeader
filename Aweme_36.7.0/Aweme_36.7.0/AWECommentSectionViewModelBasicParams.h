@class NSString, NSDictionary;

@interface AWECommentSectionViewModelBasicParams : NSObject <AWECommentSectionViewModelBasicParamsProtocol>

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *priorityTypeInVideoTitleCell;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *bizLogExtraDict;
@property (nonatomic) unsigned long long eventSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
