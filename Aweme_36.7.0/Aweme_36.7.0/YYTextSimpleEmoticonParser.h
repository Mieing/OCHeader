@class NSString, NSDictionary, NSRegularExpression, NSObject;
@protocol OS_dispatch_semaphore;

@interface YYTextSimpleEmoticonParser : NSObject <YYTextParser> {
    NSRegularExpression *_regex;
    NSDictionary *_mapper;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (copy) NSDictionary *emoticonMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
