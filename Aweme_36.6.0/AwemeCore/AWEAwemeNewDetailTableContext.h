@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEAwemeNewDetailTableContext : AWEAwemePageContext <AWEAwemeNewDetailTableContextProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subContextClassNameArray;
- (void).cxx_destruct;

@end
