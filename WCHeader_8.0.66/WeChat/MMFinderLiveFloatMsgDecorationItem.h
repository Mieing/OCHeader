@class NSString;

@interface MMFinderLiveFloatMsgDecorationItem : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *localFileUrl;

+ (id)itemFromPBDecoration:(id)a0;
+ (id)itemFromFreeMsgConfig:(id)a0;

- (void).cxx_destruct;

@end
