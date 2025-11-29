@class NSDictionary, WKWebView, NSHashTable, NSObject;
@protocol OS_xpc_object;

@interface WKXPCAttachment : NSObject

@property (retain, nonatomic) NSHashTable *dicts;
@property (retain, nonatomic) NSDictionary *envs;
@property (weak, nonatomic) WKWebView *webView;
@property (nonatomic) int flag;
@property (nonatomic) unsigned int feat;
@property (nonatomic) int count;
@property (nonatomic) int connCount;
@property (retain, nonatomic) NSHashTable *connections;
@property (retain, nonatomic) NSObject<OS_xpc_object> *bootstrap;

- (id)init;
- (void)clear;
- (BOOL)isValid;
- (void)addObject:(id)a0;
- (BOOL)hasQOS;
- (void)addConnection:(id)a0;
- (BOOL)hasPID;
- (BOOL)isStarted;
- (BOOL)isEnded;
- (void).cxx_destruct;

@end
