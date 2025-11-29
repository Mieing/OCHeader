@class NSString, NSArray;

@interface WAShareAppMessageInnerPermanentModel : NSObject

@property (nonatomic) BOOL shouldUseUpdatableShare;
@property (retain, nonatomic) NSString *updatableShareTemplateId;
@property (nonatomic) BOOL isToDoMessage;
@property (copy, nonatomic) NSString *toDoActivityId;
@property (nonatomic) BOOL isPrivateMessage;
@property (nonatomic) BOOL bInSharing;
@property (retain, nonatomic) NSArray *participant;
@property (nonatomic) unsigned int chooseType;

- (void).cxx_destruct;

@end
