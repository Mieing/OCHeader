@class NSData;

@interface OpenIMOplogReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *buf;

+ (void)initialize;

@end
