@class NSString, AWESafeMutableArray;

@interface AWEInputTextCutManager : HTSService <AWEInputTextCutManager>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentString;
@property (retain, nonatomic) AWESafeMutableArray *wordsList;
@property (nonatomic) BOOL allowCommit;
@property (nonatomic) BOOL deleteInsert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)beginEditing:(id)a0 enterFrom:(id)a1;
- (void)commitTracker:(id)a0;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;

@end
