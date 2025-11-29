@class NSString, LynxUIContext;

@interface LynxResourceRequest : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id requestParams;
@property (nonatomic) long long mode;
@property (readonly, weak, nonatomic) LynxUIContext *uiContext;

- (id)initWithUrl:(id)a0 type:(long long)a1;
- (id)initWithUrl:(id)a0 andRequestParams:(id)a1;
- (id)initWithUrl:(id)a0 type:(long long)a1 context:(id)a2;
- (id)getLynxResourceServiceRequestParams;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
