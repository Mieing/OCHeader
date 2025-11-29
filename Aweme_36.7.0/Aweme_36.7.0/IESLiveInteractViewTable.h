@class NSMutableDictionary;

@interface IESLiveInteractViewTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *viewTable;

- (void)insert:(id)a0 for:(id)a1;
- (void)remove:(id)a0 for:(id)a1;
- (void)enumerated:(id /* block */)a0 for:(id)a1;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
