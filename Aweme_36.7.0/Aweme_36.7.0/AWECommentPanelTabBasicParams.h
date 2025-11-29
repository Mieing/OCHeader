@class NSString, NSDictionary, AWEPageContext, NSArray;

@interface AWECommentPanelTabBasicParams : NSObject

@property (readonly, weak, nonatomic) AWEPageContext *preNode;
@property (nonatomic) BOOL noTabScene;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long enterSource;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *bizLogExtraDict;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL isPadSplitting;
@property (copy, nonatomic) NSArray *whiteTabList;

- (id)initWithPreNode:(id)a0;
- (void).cxx_destruct;

@end
