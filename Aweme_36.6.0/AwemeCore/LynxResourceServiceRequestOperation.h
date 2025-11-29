@class NSString;
@protocol IESForestRequestOperation;

@interface LynxResourceServiceRequestOperation : NSObject <LynxServiceResourceRequestOperationProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id<IESForestRequestOperation> requestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)cancel;

@end
