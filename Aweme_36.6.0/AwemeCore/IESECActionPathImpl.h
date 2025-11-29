@class NSString, NSMutableDictionary;

@interface IESECActionPathImpl : NSObject <IESECActionPath, NSCoding> {
    NSMutableDictionary *_paramMap;
    NSString *_pageName;
    float _random;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tradeBtmList;
- (id)initWithSessionId:(id)a0 pageName:(id)a1;
- (void)appendActionLogNode:(id)a0;
- (void).cxx_destruct;
- (id)toJSON;

@end
