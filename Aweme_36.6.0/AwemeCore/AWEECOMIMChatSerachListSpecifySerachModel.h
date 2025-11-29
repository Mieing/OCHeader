@class NSArray;

@interface AWEECOMIMChatSerachListSpecifySerachModel : NSObject

@property (copy, nonatomic) NSArray *itemArr;

+ (id)generateChatListSerachModel;
+ (id)generateChatDetailSerachModelWithPigeonBizType:(id)a0 theOtherId:(id)a1 showGoodsItem:(BOOL)a2;

- (void).cxx_destruct;

@end
