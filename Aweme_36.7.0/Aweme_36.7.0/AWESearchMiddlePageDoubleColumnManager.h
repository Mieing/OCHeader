@class NSDictionary, NSString;

@interface AWESearchMiddlePageDoubleColumnManager : NSObject

@property (copy, nonatomic) NSDictionary *queryInfoParams;
@property (retain, nonatomic) NSString *searchMiddleSelectedAwemeID;
@property (copy, nonatomic) NSString *searchSessionID;
@property (copy, nonatomic) NSDictionary *searchParams;

+ (BOOL)enableQueryInfo;
+ (BOOL)needAddOuterParmas:(id)a0;
+ (BOOL)enableSearchSessionID;
+ (id)shareInstance;

- (void)storeEnterDetailInfo:(id)a0 type:(long long)a1;
- (void)attackParamsToInnerViewController:(id)a0 params:(id)a1 enterFrom:(id)a2;
- (id)coreEventList;
- (BOOL)isFirstOuterFromMiddlePageDoulbeColumnWithItemID:(id)a0;
- (id)fetchQueryInfo;
- (void)clearQueryInfo;
- (void)storeEnterDetailInfoWithAweme:(id)a0;
- (void).cxx_destruct;

@end
