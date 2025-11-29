@class NSArray, IESLiveMultiInteractList, HTSLiveUser;

@interface IESLiveLinkmicPreStreamUserService : NSObject

@property (retain, nonatomic) NSArray *interactAllUsersList;
@property (retain, nonatomic) IESLiveMultiInteractList *listModel;
@property (copy, nonatomic) NSArray *seiArray;
@property (retain, nonatomic) HTSLiveUser *roomOwner;

- (void)updateListModel:(id)a0;
- (BOOL)updateSomeoneSpeaking:(id)a0 talking:(unsigned long long)a1;
- (void)updateWithSEIResult:(id)a0;
- (id)pr_logWithArray:(id)a0;
- (BOOL)isEqualToNewList:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
