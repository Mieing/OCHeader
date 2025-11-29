@class NSMutableDictionary;

@interface TIMXPBNCSBModifyMsgInfoExtEvent : GPBMessage

@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
