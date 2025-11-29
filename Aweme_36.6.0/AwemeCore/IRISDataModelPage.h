@class IRISDataReferOptions, NSString, NSDictionary, NSArray, NSMutableArray;

@interface IRISDataModelPage : IRISDataModel

@property (copy, nonatomic) NSString *pageId;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSDictionary *paramters;
@property (retain, nonatomic) IRISDataReferOptions *options;
@property (retain, nonatomic) IRISDataModelPage *prePage;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSDictionary *referDict;
@property (readonly) NSDictionary *params;
@property (readonly) id objectRef;
@property (retain, nonatomic) NSArray *userActions;

- (void)_parsePageObjectRefIfNeed;
- (void)setPage:(id)a0 parameters:(id)a1 from:(id)a2 options:(id)a3;
- (id)referData;
- (BOOL)handleUserAction:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
