@class NSNumber, FlutterStandardTypedData;

@interface CommentInputRequest : NSObject

@property (retain, nonatomic) NSNumber *show;
@property (retain, nonatomic) FlutterStandardTypedData *commentInfo;
@property (retain, nonatomic) NSNumber *canSwitch;
@property (retain, nonatomic) NSNumber *useIdentityType;
@property (retain, nonatomic) NSNumber *enableMention;
@property (retain, nonatomic) NSNumber *showInputBar;
@property (retain, nonatomic) NSNumber *disableShowKeyboard;

+ (id)makeWithShow:(id)a0 commentInfo:(id)a1 canSwitch:(id)a2 useIdentityType:(id)a3 enableMention:(id)a4 showInputBar:(id)a5 disableShowKeyboard:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
