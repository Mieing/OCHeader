@class NSString;

@interface MMFinderLiveInteractionMsgInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) int showArea;

+ (id)createLiveInteractionMsgInfo:(unsigned long long)a0 content:(id)a1 liveContact:(id)a2 showArea:(unsigned int)a3;

- (id)description;
- (void).cxx_destruct;

@end
