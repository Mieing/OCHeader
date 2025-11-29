@class NSString;
@protocol IESLiveUserService;

@interface IESLiveFunctionSquareSearchApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) NSString *baseURL;

- (void)configAPI;
- (void)requestWithPath:(id)a0 postMethod:(BOOL)a1 parameters:(id)a2 modelClass:(Class)a3 monitor:(id)a4 callback:(id /* block */)a5;
- (void)fetchStampSearchSelectionWithKeyword:(id)a0 scene:(unsigned long long)a1 liveScene:(unsigned long long)a2 roomService:(id)a3 callBack:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
