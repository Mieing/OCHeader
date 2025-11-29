@class NSString;
@protocol IESVSMessageFilter, IESLiveUserService;

@interface IESVSMessageFakedFilter : HTSLiveMessageFakedFilter <IESVSMessageFilter> {
    id<IESLiveUserService> _userService;
}

@property (retain, nonatomic) id<IESVSMessageFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doFilter:(id)a0;
- (void).cxx_destruct;

@end
