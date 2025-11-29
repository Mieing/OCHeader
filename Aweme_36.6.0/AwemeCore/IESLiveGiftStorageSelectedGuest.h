@class NSArray, NSNumber, NSString;

@interface IESLiveGiftStorageSelectedGuest : MTLModel

@property (retain, nonatomic) NSArray *toUsers;
@property (nonatomic) BOOL allMic;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *mixedAnchorID;
@property (nonatomic) unsigned long long recordActionType;

- (id)initWithToUsers:(id)a0 allMic:(BOOL)a1 roomID:(id)a2 mixedAnchorID:(id)a3 recordActionType:(unsigned long long)a4;
- (void).cxx_destruct;

@end
