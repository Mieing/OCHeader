@class NSString;

@interface AWEOFGGiveOkane : HTSService <AWEOFGGiveOkane>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)giveOkaneOrder:(id)a0 fromScheme:(id)a1 callback:(id /* block */)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;


@end
