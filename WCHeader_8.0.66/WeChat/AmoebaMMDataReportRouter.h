@class NSString, NSMutableArray;

@interface AmoebaMMDataReportRouter : NSObject <AmoebaDataRouterProtocol> {
    NSMutableArray *m_logIdBlackList;
    unsigned long long m_reportStrMaxLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeSamePageParams:(id)a0;
+ (void)removeMaxLengthParams:(id)a0;
+ (id)getMaxLengthParam:(id)a0;
+ (void)removeParams:(id)a0 value:(id)a1;
+ (BOOL)readParams:(id)a0 block:(id /* block */)a1;
+ (id)changeMutableObject:(id)a0;

- (id)init;
- (BOOL)onDataReport:(id)a0 time:(unsigned long long)a1 params:(id)a2 routeRule:(id)a3;
- (unsigned long long)routeType;
- (void)route:(id)a0 reportStr:(id)a1 routeRule:(id)a2;
- (id)toReportStr:(id)a0;
- (void).cxx_destruct;

@end
