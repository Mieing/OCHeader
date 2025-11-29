@class NSNumber, NSString, HTSLiveUser;

@interface IESLiveGiftStorageGuildGameGuest : MTLModel

@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *anchorID;

- (id)initWithToUser:(id)a0 roomID:(id)a1 anchorID:(id)a2;
- (void).cxx_destruct;

@end
