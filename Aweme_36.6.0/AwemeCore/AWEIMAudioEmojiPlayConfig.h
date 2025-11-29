@class AWEIMEmoticonModel, NSString;

@interface AWEIMAudioEmojiPlayConfig : NSObject

@property (retain, nonatomic) AWEIMEmoticonModel *emoticon;
@property (copy, nonatomic) NSString *convID;
@property (copy, nonatomic) NSString *msgID;
@property (nonatomic) unsigned long long playMethod;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
