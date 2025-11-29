@class NSString, NSData;
@protocol HHServicePublisherDelegate;

@interface HHServicePublisher : HHServiceDiscoveryOperation

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long port;
@property (weak, nonatomic) id<HHServicePublisherDelegate> delegate;
@property (retain, nonatomic) NSData *txtData;

- (BOOL)beginPublish;
- (void)endPublish;
- (id)initWithName:(id)a0 type:(id)a1 domain:(id)a2 txtData:(id)a3 port:(unsigned long long)a4;
- (void)dnsServiceError:(int)a0;
- (BOOL)beginPublish:(unsigned int)a0 includeP2P:(BOOL)a1;
- (void)serviceDidRegister:(id)a0 error:(int)a1;
- (BOOL)beginPublishOverBluetoothOnly;
- (void).cxx_destruct;
- (id)description;
- (id)identityString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
