@class NSString, WCTogetherDisplayInfo, NSArray;

@interface WCTogetherDisplayText : NSObject

@property (readonly, nonatomic) WCTogetherDisplayInfo *displayInfo;
@property (readonly, nonatomic) BOOL isRichText;
@property (readonly, copy, nonatomic) NSString *togetherText;
@property (readonly, copy, nonatomic) NSArray *togetherUsers;

+ (id)displayTextFromDisplayInfo:(id)a0 isRichText:(BOOL)a1;

- (void)generateTogetherText;
- (id)generateFriendsTextForContacts:(id)a0 isRichText:(BOOL)a1;
- (id)generateTextForContact:(id)a0 isRichText:(BOOL)a1;
- (void).cxx_destruct;

@end
